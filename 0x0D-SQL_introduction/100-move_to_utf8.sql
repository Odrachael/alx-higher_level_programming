-- conversion of a database to UTF-8

USE hbtn-_0c_0
ALTER TABLE first_table
CONVERT to CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
