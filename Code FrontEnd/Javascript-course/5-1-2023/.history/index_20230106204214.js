const axios = require('axios');

const fetchData = () => {
  axios.get(url = "https://631b4048fae3df4dcff94f47.mockapi.io/api/foods").then(
    (response) => {
        const data = data.filter((item) => item.name == "nước táo");
        const data = data.filter((item) => item.name == "pizza");
        console.log()
        }
  ).catch(function (error) {
        console.log("co loi");
  })
};

fetchData();