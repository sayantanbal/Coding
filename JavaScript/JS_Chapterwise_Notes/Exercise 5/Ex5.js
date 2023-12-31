function allFunc() {
  console.log(`Initializing Hack program...`);
  console.log(`Hacking...`);
  console.log(`username found : admin`);
  console.log(`password found : 1234`);
}

function callMethodafterTime() {
  return new Promise((resolve) => {
    setTimeout(() => {
      resolve(allFunc());
    }, 2000);
  });
}

async function asyncCall() {
  console.log(`calling`);
  const result = await callMethodafterTime();
  console.log(result);
}

asyncCall();
