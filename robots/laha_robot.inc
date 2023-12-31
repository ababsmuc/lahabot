define laser ranger(

    sensor(
        ranger [ 0.0 5.6]
        fov 20.0
        samples 20
    )

    color "blue"
    size [ 0.06 0.06 0.06]

    block(  points 4
            point[0] [0.26 0.17]
            point[1] [0.26 0.26]
            point[2] [0.17 0.26]
            point[3] [0.17 0.17]
            z [0 1]
    )
)

define laser2 ranger(

    sensor(
        ranger [ 0.0 5.6]
        fov 20.0
        samples 20
    )

    color "pink"
    size [ 0.06 0.06 0.06]

    block(  points 4
            point[0] [0.26 0.17]
            point[1] [0.26 0.26]
            point[2] [0.17 0.26]
            point[3] [0.17 0.17]
            z [0 1]
    )
)

define laser3 ranger(

    sensor(
        ranger [ 0.0 5.6]
        fov 20.0
        samples 20
    )

    color "purple"
    size [ 0.06 0.06 0.06]

    block(  points 4
            point[0] [0.26 0.17]
            point[1] [0.26 0.26]
            point[2] [0.17 0.26]
            point[3] [0.17 0.17]
            z [0 1]
    )
)



define laha_robot position(
    odom_error [0.03 0.03 0.00 0.05]
    localization "odom"
    size [ 0.4 0.3 0.2 ]
    gui_nose 1
    drive "diff"
    color "purple"

    laser(pose [ 0.0 0.18 0.0 90])
    laser2(pose [ 0.16 0.10 0.0 45])
    laser3(pose [ -0.16  0.12 0.0 135])

     block(  points 4
            point[0] [0.26 -0.03]
            point[1] [0.26 0.45]
            point[2] [0.17 0.45]
            point[3] [0.17 -0.03]
            z [0 10]
    )

     block(  points 5
            point[0] [0.37 0.05]
            point[1] [0.42 0.11]
            point[2] [0.32 0.21]
            point[3] [0.26 0.21]
            point[4] [0.26 0.13]
            z [0 1]
    )

    block(  points 5
            point[0] [0.32 0.21]
            point[1] [0.42 0.29]
            point[2] [0.38 0.36]
            point[3] [0.26 0.29]
            point[4] [0.26 0.21]
            z [0 1]
    )

     block(  points 5
            point[0] [0.05 0.06]
            point[1] [0.17 0.13]
            point[2] [0.17 0.21]
            point[3] [0.12 0.21]
            point[4] [0.01 0.13]
            z [0 1]
    )

     block(  points 5
            point[0] [0.12 0.21]
            point[1] [0.17 0.21]
            point[2] [0.17 0.30]
            point[3] [0.06 0.38]
            point[4] [0.02 0.32]
            z [0 1]
    )
)
