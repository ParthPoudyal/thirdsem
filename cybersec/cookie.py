from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By
import time
driver_path = "chromedriver-win64\chromedriver-win64\chromedriver.exe"

service = Service(driver_path)
driver = webdriver.Chrome(service=service)

driver.get("https://www.youtube.com")
initial_cookielist = driver.get_cookies(); 
cookielist = [(items["name"], items["value"]) for items in initial_cookielist]

print (cookielist)