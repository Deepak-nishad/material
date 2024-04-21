import React, { Component } from 'react'

class VirtualDom extends Component {

    constructor(props) {
        super(props)

        this.state = {

            courses: [
                { id: 101, name: "react" },
                { id: 102, name: "Angular" },
                { id: 103, name: "java" },
                { id: 104, name: "Python" },
                { id: 105, name: "Nodejs" }
            ]
        }

        setTimeout(() => {
            let coursesArray = this.state.courses;
            let courseObj = this.state.courses.find((m) => m.id === 103);
            let courseId = this.state.courses.findIndex((m) => m.id === 103);
            if (courseObj) {
                coursesArray.splice(courseId, 1, { name: "advance Java" })
                this.setState(coursesArray);

            }

        }, 3000)
    }



    render() {
        const { courses } = this.state;
        return (
            <div>
                <h2>
                    hello virtual dom
                </h2>
                <ul>
                    {courses.map((val, index) => {
                        // return <li key={val.id}>{val.name}</li>
                        return <li key={index}>{val.name}</li>
                    })
                    }
                </ul>
            </div>
        )
    }
}


export default VirtualDom