const axios = require((id = "axios"));

const fetchData = () => {
  axios.get(url = "http://631b4048fae3df4dcff94f47.mockapi.io/api/foods").then(
    (response) => {
        console.log(response.data);
        }
  ).catch((error => {
        console.log(message:"co loi");
  }))
};
