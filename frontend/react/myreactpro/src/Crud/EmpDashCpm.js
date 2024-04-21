import axios from 'axios'
import React, { useEffect, useState } from 'react'
import ModeEditIcon from '@mui/icons-material/ModeEdit';
import DeleteIcon from '@mui/icons-material/Delete';
import { Link } from 'react-router-dom';
const EmpDashCpm = () => {
    const [user, setUser] = useState([]);

    useEffect(() => {
        fetchData();
    }, [])

    const fetchData = () => {
        axios.get("http://localhost:8888/user").then((res) => {
            console.log(res);
            setUser(res.data);

        }).catch((err) => {
            console.log(err)
        })
    }

    const deleteRecord = (id) => {
        if (window.confirm(`Are you sure to delete id : ${id}`)) {
            axios.delete(`http://localhost:8888/user/${id}`).then(() => {
                window.alert("record deleted suceesfully")
                fetchData();
            }).catch((err) => {
                console.log(err)
            })
        }

    }
    return (
        <div>
            <h2>This is Employye dashBoard</h2>
            <Link to="main/empadd" className='btn btn-primary mb-2'>Add</Link>
            <table className='table table-striped'>
                <thead>
                    <tr>
                        <th>Sr.No</th>
                        <th>UserID</th>
                        <th>userPassword</th>
                        <th>Action</th>
                    </tr>
                </thead>
                <tbody>
                    {
                        user.map((val, index) => {
                            return <tr key={index}>
                                <td>{index + 1}</td>
                                <td>{val.userId}</td>
                                <td>{val.userPassword}</td>

                                <td>
                                    <Link to="f">
                                        <button type='button' className='btn btn-outline-primary btn-sm'><ModeEditIcon /></button>
                                    </Link>

                                    <button type='button' className='btn btn-outline-danger btn-sm' onClick={() => { deleteRecord(1) }
                                    }><DeleteIcon /></button></td>
                            </tr>
                        })
                    }
                </tbody>
            </table>
        </div>
    )
}

export default EmpDashCpm