const axios = require('axios');

const fetchData = () => {
  axios.get(url = "https://631b4048fae3df4dcff94f47.mockapi.io/api/foods").then(
    (response) => {
        const data =
        }
  ).catch(function (error) {
        console.log("co loi");
  })
};

fetchData();