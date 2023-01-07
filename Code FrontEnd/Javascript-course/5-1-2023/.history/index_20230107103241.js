// const axios = require('axios');

// const fetchData = () => {
//   axios.get(url = "https://631b4048fae3df4dcff94f47.mockapi.io/api/foods").then(
//     (response) => {
//         // const data = data.filter((item) => item.name == "nước táo");
//         // const data = data.filter((item) => item.name == "pizza");
//         // console.log("táo");
//         // console.log("pizza");
//         const data = response.data;
//         data.forEach(element => {
//           if (element.name == "nước táo") {
//             console.log("uống");
//           } else if (element.name == "pizza") {
//             console.log("ăn");
//           }
//         });
//         }
//   ).catch(function (error) {
//         console.log("co loi");
//   })
// };
// fetchData();
// Câu 2 :
// const axios = require('axios');
// const todo=[], done = [],inProgress = [];
// const fetchData = () => {
//     axios.get('https://631b4048fae3df4dcff94f47.mockapi.io/api/todoItems').then(
//         (response) => {
//             const data = response.data;
//             data.forEach(element => { 
//                 if (element.status == "todo") todo.push(element);
//                 else if (element.status == "done") done.push(element);
//                 else if (element.status == "in-progress") inProgress.push(element);
//             })
//             console.log("Todo la:")
//             for (let i = 0; i < todo.length; i++) {
//                 console.log(`${i+1}. ${todo[i].title}`)
//             }
//             console.log("Inprogress la")
//             for (let i = 0; i < inProgress.length; i++) {
//                 console.log(`${i+1}. ${inProgress[i].title}`)
//             }
//             console.log("done la")
//             for (let i = 0; i < done.length; i++) {
//                 console.log(`${i+1}. ${done[i].title}`)
//             }
//         })
//     .catch((error) => {
//         console.log("co loi xay ra");
//     })
// }
// fetchData();