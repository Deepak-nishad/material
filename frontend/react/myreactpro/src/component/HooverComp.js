import React, { Component } from 'react'

export class HooverComp extends Component {
    constructor(props) {
        super(props)

        this.state = {
            count: 0
        }
    }
    incrementCounter = () => {
        this.setState((preState) => ({ count: preState.count + 1 }))
    }
    render() {
        return (
            <div>
                <h2>This is Click Component</h2>
                <p>{this.state.count}</p>
                {/* <button type='button' onClick={this.incrementCounter}>increment</button> */}
                <button type='button' onMouseOver={this.incrementCounter}>onMouseOver-increment</button>
            </div>
        )
    }
}

export default HooverComp