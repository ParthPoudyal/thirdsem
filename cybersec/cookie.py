from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By
import time
driver_path = "chromedriver-win64\chromedriver-win64\chromedriver.exe"

service = Service(driver_path)
driver = webdriver.Chrome(service=service)

driver.get("https://instagram.com")

initial_cookielist = driver.get_cookies()
print (initial_cookielist)

cookielist = list()
for items in initial_cookielist:    
    if "name" in items:
        cookielist.append(items["name"])
        
print (cookielist)           
time.sleep(5)
newcookie = {"name":"sessionid", "value":"61474402446%3AVDXNwHCHRt7eM1%3A6%3AAYcIwJ6tiAiaa3IRTbH1W-sz3p95FtnRGPi8oFrbZlzh","domain":".instagram.com"}
driver.add_cookie(newcookie)
driver.refresh()



post_cookielist = driver.get_cookies()
print (post_cookielist)

cookielist2 = list()
for items in initial_cookielist:    
    if "name" in items:
        cookielist2.append(items["name"])
driver.quit()
