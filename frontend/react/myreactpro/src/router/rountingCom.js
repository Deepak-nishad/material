
import { createBrowserRouter } from "react-router-dom";
import MethodEventComp from "../component/MethodEventComp";
import MyImagesComp from "../component/MyImagesComp";
import PageNotFound from "../component/PageNotFound";
import ReactHooks from "../Hooks/ReactHooks";
import VirtualDom from "../component/VirtualDom";
import MainDashComp from "../component/MainDashComp";
import Login from "../layout/Login";
import ProtectedRoutComp from "./ProtectedRoutComp";
import EmpDashCpm from "../Crud/EmpDashCpm";
import EmpAddComp from "../Crud/EmpAddComp";
import EmpEditComp from "../Crud/EmpEditComp";




const router = createBrowserRouter([
    // doubt
    { path: "", element: <Login /> },
    { path: "/login", element: <Login /> },
    {
        path: "main",
        element: <ProtectedRoutComp Component={MainDashComp} />, children: [
            {

                path: "img",
                element: <MethodEventComp />
            },
            {
                path: "parent",
                element: <div>Hello world! parent</div>
            },
            { path: "empdash", element: <EmpDashCpm /> },
            { path: "empadd", element: <EmpAddComp /> },
            { path: "empedit", element: <EmpEditComp /> },
            // parameter  routing
            {
                path: "mystate/:id",
                element: <MyImagesComp />
            },

        ]
    },

    // {
    //     path: "/img",
    //     element: <MethodEventComp />
    // },
    // {
    //     path: "/parent",
    //     element: <div>Hello world! parent</div>
    // },
    // // parameter  routing
    // {
    //     path: "/mystate/:id",
    //     element: <MyImagesComp />
    // },

    // {
    //     path: "hooks",
    //     element: <ReactHooks />,
    //     children: [
    //         {
    //             path: "virtual",
    //             element: <VirtualDom />
    //         }
    //     ]
    // },

    // wild card routing
    {
        path: "*",
        element: <PageNotFound />
    }


]);

export default router