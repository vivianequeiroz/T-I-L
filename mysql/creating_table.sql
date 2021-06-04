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

-- INSERTING ITEMS - INDEPENDENT TABLE
INSERT INTO COURSE (courseId, courseName)
    VALUES
    (01, 'Biology'),
    (02, 'Geology'),
    (03, 'History');

-- INSERTING ITEMS - DEPENDENT TABLE
INSERT INTO STUDENT(enrollmentNumber, studentName, phone, courseId)
    VALUES
    (123, 'João Vitor', '11123456789', 01);