import axios from 'axios';
import React, { useState } from 'react'

const EmpAddComp = () => {
    const [newUser, setUser] = useState({
        userId: '',
        userPassword: ''
    });

    const inputChangeHandler = (e) => {
        // console.log(e.target.type);
        // console.log(e.target.value);
        // console.log(e.target.value);
        const { type, name, value } = e.target;
        setUser({ ...newUser, [name]: value })


    }

    const AddRecord = (event) => {
        event.preventDefault();
        axios.post(`http://localhost:8888/user`, newUser).then(() => {
            window.alert("record add succesfully")
        }).catch((err) => {
            console.log(err)
        })
    }

    return (
        <div>
            <h2>This is emp add component</h2>
            <form onSubmit={AddRecord}>
                <input type='text' name='userId' placeholder='enter user id' onChange={(event) => inputChangeHandler(event)} value={newUser.userId} /><br></br>
                <input type='text' name='userPassword' placeholder='enter user password' onChange={(event) => inputChangeHandler(event)} value={newUser.userPassword} /><br></br>
                <button type='submit' className='btn btn-primary'>submit</button>
            </form>
        </div>
    )
}

export default EmpAddComp