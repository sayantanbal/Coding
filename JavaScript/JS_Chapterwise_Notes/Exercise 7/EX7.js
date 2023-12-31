class RandomPasswordGenerator {
  constructor() {
    this.password = "";
  }
  generatePassword() {
    const prompt = require("prompt-sync")({sigint : true});
    let length = Number(prompt("Enter the length of password: "));
    if (length === 0) {
      console.log("Password can not be empty");
      return;
    }
    console.log("Generating Password...");
    let password = "";
    let characters =
      "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+ ";
    for (let i = 0; i < length; i++) {
      password += characters.charAt(
        Math.floor(Math.random() * characters.length)
      );
    }
    this.password = password;
    // console.log(`Password generated: ${this.password}`);
  }
  get Password() {
    return this.password;
  }
}
let obj = new RandomPasswordGenerator();

obj.generatePassword();
console.log(`Newly generated password is -> ${obj.Password}`);
