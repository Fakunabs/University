let month = prompt("Nhập vào tháng bạn muốn tìm ngày : ");
let year = prompt("Nhập vào năm bạn muốn tìm ngày : ");
let day = 0;
switch (month ) {
    case "1":
    case "3":
    case "5":
    case "7":
    case "8":
    case "10":
    case "12":
        day = 31;
        break;
    case "4":
    case "6":
    case "9":
    case "11":
        day = 30;
        break;
    case "2": 
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            day = 29;
        }
        else {
            day = 28;
        }
    default:
        break;
}
alert("Tháng " + month + " năm " + year + " có " + day + " ngày");
