# PHP Programming Exercises

The exercises are from this website:
* http://www.runoob.com/php/php-tutorial.html

Also there are useful websites for learning PhP:
* https://www.w3schools.com/php/default.asp
* https://www.w3resource.com/php-exercises/
* https://www.phpexercises.com/

---

### PHP Installation (Linux)
#### 1. Install LAMP
https://www.youtube.com/watch?v=vazRx1Ei8VA

#### 2. Commands for Settings
```sh
# Ubuntu 
$ sudo vim /etc/apache2/apache2.conf
$ sudo /etc/init.d/apache2 restart
$ sudo chmod  o+w /var/www/html
$ sudo chmod 777 /var/www/html
```
### PHP Installation (Mac)
#### 1. Install MAMP (My Apache MySQL PHP)
https://medium.com/@romaninsh/install-php-7-2-on-macos-high-sierra-with-homebrew-bdc4d1b04ea6

#### 2. Commands for Settings
```sh
# Built-in PHP
$ sudo /usr/bin/php -S localhost:80     # run this code in your project folder

# PHP 7.2 from homebrew
$ brew services list
$ brew services start ettpd
$ brew ervices stop httpd
```
