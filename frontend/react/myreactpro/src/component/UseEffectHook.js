import React, { useEffect, useState } from 'react'

const UseEffectHook = () => {
    const [count, setCount] = useState(0);
    const [salary, setsalary] = useState(1000);

    // no dependeny value pass
    // useEffect(() => {
    //     setCount(count + 1)
    // })


    // useEffect(() => {
    //     setCount(count + 1)
    // }, [])


    useEffect(() => {
        setCount(count + 1)
    }, [salary]);


    return (
        <div>
            <h1>
                <p>Value of count  {count}</p>

                <button type='button' onClick={() => setsalary(salary + 1000)}>btn</button>
            </h1>

        </div>
    )
}

export default UseEffectHook