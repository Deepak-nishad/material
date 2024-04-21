import React, { Component } from 'react'

class ClassCom extends Component {
    render() {
        return <div> <h1>My name is {this.props.empname}</h1>
            <h1>My psot is {this.props.empPost}</h1>
        </div>
    }

}
export default ClassCom;
