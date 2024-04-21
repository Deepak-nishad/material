import React, { Component } from 'react'

class ErrorBoundary extends Component {
    constructor(props) {
        super(props)

        this.state = {
            isCond: false
        }
    }

    static getDerivedStateFromError() {
        return {
            isCond: true
        }
    }


    render() {
        if (this.state.isCond)
            return <p>Something went wrong</p>
        else
            return this.props.children
    }
}

export default ErrorBoundary