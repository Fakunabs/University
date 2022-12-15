CREATE DATABASE QLDA

USE QLDA

CREATE TABLE PHONGBAN
(
	MAPHG INT NOT NULL,
	TENPHONG NVARCHAR(30),
	TRPHG CHAR(9),
	NG_NHANCHUC DATETIME,
	PRIMARY KEY (MAPHG)
)
CREATE TABLE NHANVIEN
(
	MANV CHAR(9) NOT NULL,
	HONV  NVARCHAR(30),
	TENLOT  NVARCHAR(30),
	TENNV  NVARCHAR(30),
	NGSINH DATETIME,
	DCHI NVARCHAR(50),
	PHAI NCHAR(6),
	LUONG FLOAT,
	MA_NQL CHAR(9),
	PHG INT,
	PRIMARY KEY(MANV)
)

CREATE TABLE DIADIEM_PHG
(
	MAPHG INT NOT NULL,
	DIADIEM NVARCHAR(30) NOT NULL,
	PRIMARY KEY (MAPHG, DIADIEM)
)

CREATE TABLE CONGVIEC
(
	MADA INT NOT NULL,
	STT	INT NOT NULL,
	TEN_CONG_VIEC NVARCHAR(50),
	PRIMARY KEY (MADA, STT)
)

CREATE TABLE PHANCONG
(
	MA_NVIEN CHAR(9) NOT NULL,
	MADA INT NOT NULL,
	STT	INT NOT NULL,
	THOIGIAN DECIMAL(5,1),
	PRIMARY KEY (MA_NVIEN, MADA, STT)
)

CREATE TABLE THANNHAN
(
	MA_NVIEN CHAR(9) NOT NULL,
	TENTN NVARCHAR(30) NOT NULL,
	PHAI NCHAR(6),
	NGSINH DATETIME,
	QUANHE NVARCHAR(16),
	PRIMARY KEY (MA_NVIEN, TENTN)
)

CREATE TABLE DEAN
(
	MADA INT NOT NULL,
	TENDA NVARCHAR(30),
	DDIEM_DA NVARCHAR(30),
	PHONG INT,
	PRIMARY KEY (MADA)
)
/*TAO KHOA NGOAI CHO CAC BANG*/
/*TRPHG - NHANVIEN(MANV)*/
ALTER TABLE PHONGBAN ADD
	CONSTRAINT FK_TRPHG_MANV FOREIGN KEY (TRPHG) REFERENCES NHANVIEN(MANV)
ALTER TABLE DIADIEM_PHG ADD
	CONSTRAINT FK_MAPHG_MAPHG FOREIGN KEY (MAPHG) REFERENCES PHONGBAN(MAPHG)


/*MODIFY STRUCTURE TBALE*/
ALTER TABLE PHONGBAN ADD DIADIEM NVARCHAR(10)

ALTER TABLE PHONGBAN DROP COLUMN DIADIEM

ALTER TABLE PHONGBAN ALTER COLUMN DIADIEM NVARCHAR(20)

/*CONTRAINST*/

ALTER TABLE NHANVIEN ADD CONSTRAINT FK_NHANVIEN_NHANVIEN 
FOREIGN KEY (MA_NQL) REFERENCES NHANVIEN(MANV)

ALTER TABLE NHANVIEN ADD CONSTRAINT FK_NHANVIEN_PHONGBAN 
FOREIGN KEY (PHG) REFERENCES PHONGBAN(MAPHG)

ALTER TABLE PHONGBAN ADD CONSTRAINT FK_PHONGBAN_NHANVIEN
FOREIGN KEY (TRPHG) REFERENCES NHANVIEN(MANV)

ALTER TABLE DIADIEM_PHG ADD CONSTRAINT FK_DIADIEM_PHG_PHONGBAN
FOREIGN KEY (MAPHG) REFERENCES PHONGBAN(MAPHG)

ALTER TABLE DEAN ADD CONSTRAINT FK_DEAN_PHONGBAN
FOREIGN KEY (PHONG) REFERENCES PHONGBAN(MAPHG)

ALTER TABLE CONGVIEC ADD CONSTRAINT FK_CONGVIEC_DEAN
FOREIGN KEY (MADA) REFERENCES DEAN(MADA)

ALTER TABLE PHANCONG ADD CONSTRAINT FK_PHANCONG_CONGVIEC
FOREIGN KEY (MADA, STT) REFERENCES CONGVIEC(MADA, STT)

ALTER TABLE THANNHAN ADD CONSTRAINT FK_THANNHAN_NHANVIEN
FOREIGN KEY (MA_NVIEN) REFERENCES NHANVIEN(MANV)

ALTER TABLE PHANCONG ADD CONSTRAINT FK_PHANCONG_NHANVIEN
FOREIGN KEY (MA_NVIEN) REFERENCES NHANVIEN(MANV)