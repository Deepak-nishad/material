import React from 'react'

import './ExternalCss.css'
import mymodule from './mycss.module.css'
const MyCssCom = () => {

    let mycssProperty = {
        color: true ? "red" : "green",
        fontSize: false ? "55px" : "40px",
        backgroundColor: false ? "lightgray" : "green"
    }

    return (
        <div>
            <h2 style={{ color: "blue", backgroundColor: "red", textAlign: "left" }}>This is myccs component</h2>
            <p style={mycssProperty}> shjhdgsjgfdsfgjdsgfjdsgfhj</p>

            <div className='textPrimary'>
                hi you are good
            </div>
            <div className='textSucces'>
                hi you are good hi hi
            </div>

            <div className={mymodule.box}>Use of module css</div>
        </div >


    )
}

export default MyCssCom