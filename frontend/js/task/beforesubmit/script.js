function validateForm() {
    var passwordInput = document.getElementById("password");
    var passwordError = document.getElementById("passwordError");

    // Reset error message
    passwordError.textContent = "";

    // Check if the password is empty
    if (passwordInput.value === "") {
        passwordError.textContent = "Password is required";
        return false;
    }

    // Check if the password length is less than 8 characters
    if (passwordInput.value.length < 8) {
        passwordError.textContent = "Password must be at least 8 characters long";
        return false;
    }

    // Check if the password contains at least one number
    console.log(/\d/.test(passwordInput.value));
    var hasNumber = /\d/.test(passwordInput.value);
    if (!hasNumber) {
        passwordError.textContent = "Password must contain at least one number";
        return false;
    }

    // Check if the password contains at least one lowercase letter
    var hasLowercase = /[a-z]/.test(passwordInput.value);
    if (!hasLowercase) {
        passwordError.textContent = "Password must contain at least one lowercase letter";
        return false;
    }

    // Check if the password contains at least one uppercase letter
    var hasUppercase = /[A-Z]/.test(passwordInput.value);
    if (!hasUppercase) {
        passwordError.textContent = "Password must contain at least one uppercase letter";
        return false;
    }

    // Password is valid
    return true;
}
