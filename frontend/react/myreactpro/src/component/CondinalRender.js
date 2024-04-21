import React, { Component } from 'react'

class CondinalRender extends Component {
    constructor(props) {
        super()
        this.state = {
            isCond: true
        }
    }
    render() {
        let msg = "";
        if (!this.state.isCond) {
            msg = " admin login succesfully"

        } else {
            msg = "User login succesfully"

        }
        return (


            <div>
                {this.state.isCond ? "Admin login succesfully" : "user login succesfully"}
                <h2>{msg}</h2>

                {/* with short circuit */}
                {this.state.isCond && "Admin login succesfully"}
            </div>

        )
    }
}

export default CondinalRender