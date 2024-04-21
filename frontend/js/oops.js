class person {
    // data member

    pname = "deepak";
    pcontact = 8888;
    pgender = "male";
    pAddress = "Pune";

    constructor(name, contact, gender, address) {
        this.pname = name
        this.pcontact = contact
        this.pgender = gender
        this.pAddress = address
    }

    // member funation
    personDetails() {
        console.log(`Name:${this.pname}, contact: ${this.pcontact}, gender:${this.pAddress}, address:${this.pgender} `)
    }
}


// let pobj = new person();
// pobj.personDetails();
// console.log(pobj.pAddress)
// console.log(pobj.pcontact)
// console.log(pobj.pname)
// console.log(pobj.pgender)


// dynamic value  using constructor


let pobj1 = new person("Rohit", 9999, "male", "jind");
pobj1.personDetails();


// inheritence

class Company extends person {
    cName;
    cPost;
    cLocation;
    static cpassword = "Admin123"


    constructor(name, contact, gender, address, comp, designation, location) {
        super(name, contact, gender, address); // it represents parent class constructor inside child class constructor; it must be first statement in child class constructor
        this.cName = comp;
        this.cPost = designation;
        this.cLocation = location;
    }

    personDetails() {
        console.log(`Name:${this.pname},Contact:${this.pcontact},Gender:${this.pgender},Address:${this.pAddress},Company Name:${this.cName},Post:${this.cPost},Location:${this.cLocation};`);
    }

}

let companyobj = new Company("Deepak", 87795, "Male", "Haryana", "Google", "MD", "Silicon Valley")
companyobj.personDetails();

// encapsulation : - wrpping of data in single unit
// abstration : hinding unnecessary data from user and showing only required thing
// - static :- static data member and member function will be accessible outside class with classname only to make static data-member we use static keyword


// pollymorphism: it ability to take more than one form

// -  meTheod overloading :  when we have multiple method with same name in same class
// - method overrding : when we have mulitple method with same in different class

// accessing static data member
console.log(companyobj.cpassword);