import React from 'react'

const MethodEventComp = () => {
    const greeting = () => {
        window.alert("Good morning friends");
    }

    const welcome = (...std) => {
        window.alert(`welcone you ${std} in infoway`)
    }
    return (
        <div>
            {/* automaticall call */}
            {/* <button type='button' onClick={greeting()}>click me</button> */}
            {/* <button type='button' onClick={() => greeting()}>click me</button> */}
            <button type='button' onClick={greeting}>click me</button>{" "}


            <button type='button' onClick={() => welcome("manav", "suraj")}>click me spred</button>


            {/* doubt */}

            {/* <h2 onMouseOver={() => welcome("manisha", "Radha")}>on mouse hover </h2> */}
        </div >
    )
}

export default MethodEventComp