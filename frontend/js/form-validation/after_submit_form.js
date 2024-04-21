function checkAll() {

    let uname = document.getElementById("fname").value
    console.log(uname);


    let regname = "[a-zA-Z]{3,20}";

    let uedu = document.myform.edu;
    console.log(uedu);

    if (uname.trim() == "") {
        window.alert("this field is required")
        document.getElementById("fname").focus();
        return false;
    }

    if (!uname.match(regname)) {
        window.alert("user name must contain chararctor min-3 and max-20")
        document.getElementById("fname").focus();
        document.getElementById("fname").reset();
        return false;
    }

    if (uedu[0].checked == false && uedu[1].checked == false && uedu[2].checked == false && uedu[3].checked == false) {
        window.alert("please select user qualification")
        return false
    }

}