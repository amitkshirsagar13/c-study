CREATE DATABASE hotelDb;
CREATE USER 'admn'@'%' IDENTIFIED BY 'passw0rd';
CREATE USER 'admn'@'localhost' IDENTIFIED BY 'passw0rd';
GRANT ALL ON *.* TO 'admn'@'%' WITH GRANT OPTION;
GRANT ALL ON *.* TO 'admn'@'localhost' WITH GRANT OPTION;
USE hotelDb;
FLUSH PRIVILEGES;

