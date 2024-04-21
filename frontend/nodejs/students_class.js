class Student {
    stdname;
    stdid;
    stdcontact;
    stdaddress;
    stdgrade
    constructor(sname, sid, scontact, stdaddress, sgrade) {
        this.stdname = sname
        this.stdid = sid;
        this.stdcontact = scontact;
        this.stdaddress = stdaddress;
        this.stdgrade = sgrade;
    }
    studenDetails() {
        console.log(`Studentname:${this.stdname} StudentID:${this.stdid} StudentContact:${this.stdcontact} StudentAddress:${this.stdaddress} StudentGrade:${this.stdgrade}`);
    }

}
// let stdob = new Student("Deepak", 200, 9996362559, "haryana", "A")
// console.log(stdob.studenDetails());


module.exports = Student;