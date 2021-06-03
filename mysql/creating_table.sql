-- CREATING AND USING A DATABASE

CREATE DATABASE UNIVERSITY;
USE UNIVERSITY;

-- INDEPENDET TABLE
CREATE TABLE COURSE (
	courseId int,
    courseName varchar(100),
    PRIMARY KEY (courseId)
);

-- DEPENDENT TABLE
CREATE TABLE STUDENT (
	enrollmentNumber int,
    studentName varchar(100),
    phone varchar(11),
    courseId int NOT NULL,
    PRIMARY KEY (enrollmentNumber),
    FOREIGN KEY (courseId) REFERENCES COURSE(courseId)
);

