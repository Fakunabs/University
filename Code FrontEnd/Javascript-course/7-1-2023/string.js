// String(Chuỗi)

// "Hello world";
// 'My name is Xuân Thịnh'
// `I am mobile developer`

const name = "Xuân Thịnh";
const job = "Developer";


// Cách 1: Dùng dấu nháy kép
// const string = "My name is " + name + " and I am a " + job;
// console.log(string);

// Cách 2: Dùng dấu nháy đơn
// const string2 = 'My name is ' + name + ' and I am a ' + job;
// console.log(string2);

// Cách 3: Dùng dấu backtick
// ${variable} : Để gọi biến
const newString = `My name is ${name} and I am a ${job}`;
console.log(newString);

console.log(newString.length); // Độ dài của chuỗi
console.log(newString.toUpperCase()); // Chuyển chuỗi thành chữ hoa
console.log(newString.toLowerCase()); // Chuyển chuỗi thành chữ thường
console.log(newString.substring(0, 30)); // Cắt chuỗi từ vị trí 0 đến vị trí 5
console.log(newString.split(" ")); // Tách chuỗi thành mảng
console.log(newString.split("")); // Tách chuỗi thành mảng
console.log(newString.startsWith("My")); // Kiểm tra chuỗi có bắt đầu bằng chuỗi "My" hay không
console.log(newString.endsWith("My")); // Kiểm tra chuỗi có kết thúc bằng chuỗi "Developer" hay không
console.log(newString.includes("I")); // Kiểm tra chuỗi có chứa chuỗi "My" hay không
console.log(newString.repeat(3)); // Lặp chuỗi 3 lần
console.log(newString.slice(0, 5)); // Cắt chuỗi từ vị trí 0 đến vị trí 5
console.log(newString.charAt(1)); // Lấy ký tự ở vị trí 1

// Path: Code FrontEnd/Javascript-course/7-1-2023/array.js