# pip install beautifulsoup4

from bs4 import BeautifulSoup
soup = BeautifulSoup("<p>Some<b>bad<i>HTML")
print(soup.prettify())

'''
soup = BeautifulSoup("<p>Some<b>bad<i>HTML")
<p>
 Some
 <b>
  bad
  <i>
   HTML
  </i>
 </b>
</p>
'''

# pip list
'''
Package               Version
--------------------- ---------
beautifulsoup4        4.12.3
opencv-contrib-python 4.10.0.84
pip                   24.0
soupsieve             2.5
'''

# pip show beautifulsoup4
'''
Name: beautifulsoup4
Version: 4.12.3
Summary: Screen-scraping library
Home-page:
Author:
Author-email: Leonard Richardson <leonardr@segfault.org>
License: MIT License
Location: C:\Python312\Lib\site-packages
Requires: soupsieve
Required-by:
'''

# pip install --upgrade beautifulsoup4

# pip uninstall beautifulsoup4