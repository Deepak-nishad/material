import React from 'react'
import { Outlet } from 'react-router-dom'
const ReactHooks = () => {
    return (
        <div><h2>This is child routing</h2>
            <Outlet />
        </div>

    )
}

export default ReactHooks