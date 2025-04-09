import requests
from bs4 import BeautifulSoup

url = 'https://google.com'
response = requests.get(url)

soup = BeautifulSoup(response.text, 'html.parser')
text = soup.get_text()

with open('scraped_content.txt', 'w', encoding='utf-8') as file:
    file.write(text)
    print("Scraped data saved to 'scraped_content.txt'")
