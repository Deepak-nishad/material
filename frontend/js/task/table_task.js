function changeColor() {
    let num = document.getElementById("input").value;
    console.log(num);
    let color = document.getElementById("input2").value;
    console.log(color);

    // if (num == 1) {
    //     document.getElementById("id").style.backgroundColor = color;
    // }

    // if (num == 2) {
    //     document.getElementById("id").style.backgroundColor = color;
    // }

    // if (num == 3) {
    //     document.getElementById("id").style.backgroundColor = color;
    // }

    // if (num == 4) {
    //     document.getElementById("id4").style.backgroundColor = color;
    // }

    // if (num == 5) {
    //     document.getElementById("id").style.backgroundColor = color;
    // }

    switch (num) {
        case "1":
            document.getElementById("id1").style.backgroundColor = color;
            break;
        case 2:
            document.getElementById("id2").style.backgroundColor = color;
            break;
        case 3:
            document.getElementById("id3").style.backgroundColor = color;
            break;
        case 4:
            document.getElementById("id4").style.backgroundColor = color;
            break;
        case 5:
            document.getElementById("id5").style.backgroundColor = color;
            break;
        case 6:
            document.getElementById("id6").style.backgroundColor = color;
            break;
        case 7:
            document.getElementById("id7").style.backgroundColor = color;
            break;
        default:
            num = "Invalid day";
            break;
    }
}