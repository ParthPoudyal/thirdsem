from selenium import webdriver
from selenium.webdriver.chrome.service import Service

driver_path = "chromedriver-win64\chromedriver-win64\chromedriver.exe"

service = Service(driver_path)
driver = webdriver.Chrome(service=service)

url = driver.get("https://www.geeksforgeeks.org")

driver.get (url)

get_url = driver.current_url

print (get_url)

input ("press enter to exit")
