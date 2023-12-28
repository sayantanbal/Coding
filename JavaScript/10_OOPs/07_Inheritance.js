class User {
    constructor(username){
        this.username = username
    }

    logMe(){
        console.log(`USERNAME is ${this.username}`);
    }
}

class Teacher extends User{
    constructor(username, email, password){
        super(username) // super keyword ki kore kaj kore? super keyword diye parent class er constructor function ta call kora hoy. jmn ekhane super(username) diye User class er constructor function ta call kora hoyeche.
        this.email = email
        this.password = password
    }

    addCourse(){
        console.log(`A new course was added by ${this.username}`);
    }
}

const chai = new Teacher("chai", "chai@teacher.com", "123") // ekhane chai object ta Teacher class er constructor function er maddhome create kora hoyeche. 

chai.logMe()
const masalaChai = new User("masalaChai")

masalaChai.logMe()

console.log(chai instanceof User); // instanceof keyword diye check kora jay je ekta object onno ekta class er instance kina. ekhane chai object ta User class er instance.