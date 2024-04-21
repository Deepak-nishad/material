function checkuid() {
    let uedu = document.myform.uid.value;
    var reguid = /^\w+@[a-zA-Z_]+?\.[a-zA-Z]{2,3}$/;
    if (uedu.trim() == "") {
        // window.alert("this is field required")
        document.getElementById("uid").style.border = "2px solid red";
        document.getElementById("error").innerHTML = "user id is required";
        document.getElementById("error").style.color = "red";
    }

    else if (!uedu.match(reguid)) {
        document.getElementById("uid").style.border = "2px solid red";
        document.getElementById("error").innerHTML = "user id must be in proper format";
        document.getElementById("error").style.color = "red";
        return false;

    }
    else {
        document.getElementById("error").style.border = "2px solid green "
    }

}

function checkterm() {
    let uterm = document.myform.term;
    if (uterm.chcked == false) {
        document.getElementById("term").style.border = "2px solid red";
        document.getElementById("termer").innerHTML = "accept term and condition";
        document.getElementById("termerr").style.color = "red";
        else {
            document.getElementById("term")
        }
    }

}


