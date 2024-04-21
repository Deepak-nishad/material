import React, { useState } from 'react'

const UseStateComp = () => {
    const [salary, setsalary] = useState(1000);
    const [myname, setmyname] = useState("ddepak");
    return (
        <div>
            <h1>This is useState</h1>
            <p>My name is : {myname}
                <button type='button' onClick={() => setmyname("Deepak")}>setmyname</button>
            </p>
            <p>Salary is {salary}

                <button type='button' onClick={() => setsalary(salary + 100)}>salary++</button>
            </p>
        </div>
    )
}

export default UseStateComp