-- Kiểu dữ liệu - data type là cách ta lưu 1 dữ liệu nào đó
-- Tiền($...), số(nguyên, thực), chữ, câu/ đoạn văn, ngày tháng là cách ta lưu 1 loại dữ liệu nào đó
-- 1 NNLT hỗ trợ nhiều loại dữ liệu khác nhau - data type

-- Khi lập trình trong SQL Server, vì câu lệnh nằm trên nhiều dòng...
-- Mình cần nhắc Tool này 1 câu : đừng nhìn lệnh riêng lẻ(nhiều dòng) mà hãy nhìn nguyên cụm lệnh mới có ý nghĩa
-- Ta dùng lệnh GO để gom 1 cụm lệnh lập trình lại thành 1 đơn vị có ý nghĩa 

-- KHAI BÁO BIẾN : DECLARE 
GO

DECLARE @msg1 AS nvarchar(30) 

DECLARE @msg nvarchar(30)= N'Xin chào - Welcome to T-SQL'

-- IN BIẾN CÓ 2 LỆNH
PRINT @msg  -- IN RA KẾT QUẢ BÊN CỦA SỔ CONSOLE GIỐNG TRONG LẬP TRÌNH 

SELECT @msg -- LỆNH NÀY IN RA KẾT QUẢ DƯỚI DẠNG TABLE

DECLARE @yob int --= 2003

--GÁN GIÁ TRỊ CHO BIẾN
SET @yob = 2003 
SELECT @yob = 2004 -- SELECT DÙNG 2 CÁCH: GÁN GIÁ TRỊ CHO BIẾN, IN GIÁ TRỊ CỦA BIẾN

PRINT @yob

IF @yob > 2003
	BEGIN --{
		PRINT 'HET, BOY/GIRL'
		PRINT 'HELLO GEN Z'
	END
ELSE	  --}
	PRINT 'HELLO LADY & GENTLEMENT'

GO 