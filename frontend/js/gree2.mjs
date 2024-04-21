// export class Result {
class Result {
    stdname;
    phy;
    chem;
    math;
    constructor(s, p, c, m) {
        this.stdname = s
        this.phy = p;
        this.chem = c;
        this.math = m;
    }
    percentage() {
        let total = this.phy + this.chem + this.math;
        let percent = (total * 100) / 300;
        return percent;
    }
    Result() {
        console.log(`name:${this.stdname} physics:${this.phy} chemistry:${this.chem} math:${this.math} percentage:${this.percentage()}`);
    }
}
export default Result;