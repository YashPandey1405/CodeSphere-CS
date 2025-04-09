import requests
from bs4 import BeautifulSoup

base_url = 'https://example.com/page/'  # Replace with real paginated URL
all_data = []

for page in range(1, 6):  # Scrape first 5 pages
    url = f"{base_url}{page}"
    response = requests.get(url)
    soup = BeautifulSoup(response.text, 'html.parser')

    # Example: Extract all paragraph text
    for p in soup.find_all('p'):
        all_data.append(p.get_text())

with open('scraped_pages.txt', 'w', encoding='utf-8') as f:
    for line in all_data:
        f.write(line + '\n')

print("Scraped paginated data saved to 'scraped_pages.txt'")
