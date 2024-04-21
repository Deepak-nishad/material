// import logo from './logo.svg';
import './App.css';
import FunctionComp from './component/FunctionComp';
import ClassCom from './component/ClassCom';
import MethodEventComp from './component/MethodEventComp';
import MyCssCom from './component/MyCssCom';
import CondinalRender from './component/CondinalRender';
import VirtualDom from './component/VirtualDom';
import UseStateComp from './component/UseStateComp';
import UseEffectHook from './component/UseEffectHook';
// import MyStateComp from './component/mystateComp.js';
import MyImagesComp from './component/MyImagesComp.js';
import HooverComp from './component/HooverComp.js';
import UserComp from './component/UserComp.js';
import ErrorBoundary from './component/ErrorBoundary.js';
import Login from './layout/Login.js';


function App() {
  return (

    <div div >


      {/* <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        <p>
          Edit <code>src/App.js</code> and save to reload.
        </p>
        <a
          className="App-link"
          href="https://reactjs.org"
          target="_blank"
          rel="noopener noreferrer"
        >
          Learn React
        </a>
      </header> */}

      {/* props */}
      {/* <h1 >Props in react</h1> */}
      {/* <FunctionComp empname="satya" empPost="react" />
      <ClassCom empname="rushi" empPost="java" />
 */}

      {/* <MyStateComp /> */}

      {/* <h1 style={{ color: "red" }}>Method and events</h1> */}
      {/* <MethodEventComp />

      <CondinalRender />
      <VirtualDom /> */}

      {/* <h1 style={{ color: "red" }}>Example of use css</h1>
      <MyCssCom /> */}

      {/* <UseStateComp /> */}


      {/* <UseEffectHook /> */}

      {/* <MyImagesComp /> */}

      {/* <HooverComp /> */}

      {/* <ErrorBoundary>
        <UserComp name="Deepak" />
      </ErrorBoundary>
      <ErrorBoundary>
        <UserComp name="pranav" />
      </ErrorBoundary>

      <ErrorBoundary>
        <UserComp name="rushi" />
      </ErrorBoundary>

      <ErrorBoundary>
        <UserComp name="manish" />
      </ErrorBoundary> */}

      <Login />




    </div >
  );
}

export default App;
