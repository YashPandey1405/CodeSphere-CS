import requests
from bs4 import BeautifulSoup

url = 'https://google.com'
response = requests.get(url)

soup = BeautifulSoup(response.text, 'html.parser')
links = [a['href'] for a in soup.find_all('a', href=True)]

with open('extracted_links.txt', 'w') as f:
    for link in links:
        f.write(link + '\n')

print("All hyperlinks saved to 'extracted_links.txt'")
