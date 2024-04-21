import React from 'react'

// const UserComp = (props) => {
const UserComp = ({ name }) => {
    // const { name } = props;

    if (name === "pranav") {
        throw Error("not a user")
    }
    return (
        <div>
            <h1>{name} Login Succesfully</h1>
        </div>
    )
}

export default UserComp