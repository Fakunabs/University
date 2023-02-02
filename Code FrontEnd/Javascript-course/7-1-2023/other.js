// // Undifined 

// let a;
// console.log(a); // undefined

// let b;
// console.log(b); // 100
// b = 100;
// console.log(b); // 100

// const c = "String"

// // Null -> nothing

// let d = null;
// console.log(d); // null



let n = Number(prompt("Nhập n: "));
console.log(n);
if (n == 1 ) {
    console.log(`${n} không là số nguyên tố`); 
} else {
    for (let i = 2; i < n; i++){
        if (n % i == 0) {
            console.log(`${n} không là số nguyên tố`);
            break;
        }else {
            console.log(`${n} là số nguyên tố`);
            break;
        }
    }
} 



    
