from selenium import webdriver
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.common.by import By

chrome_options = webdriver.EdgeOptions()
chrome_options.add_argument('--headless')
chrome_options.add_argument('--disable-gpu')
# path是你自己的chrome浏览器的文件路径
path = r'C:\Program Files (x86)\Microsoft\Edge\Application\msedge.exe'
chrome_options.binary_location = path
browser = webdriver.Edge(options=chrome_options)


def getList(url):
    browser.get(url)
    res = browser.find_elements(By.XPATH, '//div[@role="row"]')
    return res[1:len(res)]

dir_path ='./LeetCode/'
base_url = 'https://leetcode.cn/problemset/algorithms/'
print(getList(base_url))