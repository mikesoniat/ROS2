from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    darwin_node = Node (
        package="my_py_pkg",
        executable="robot_news_station",
        name="robot_news_station_darwin",
        parameters=[ 
            {"robot_name": "Darwin"}
        ]
    )

    socrates_node = Node (
        package="my_py_pkg",
        executable="robot_news_station",
        name="robot_news_station_socrates",
        parameters=[ 
            {"robot_name": "Socrates"}
        ]
    )

    hume_node = Node (
        package="my_py_pkg",
        executable="robot_news_station",
        name="robot_news_station_hume",
        parameters=[ 
            {"robot_name": "Hume"}
        ]
    )

    einstein_node = Node (
        package="my_py_pkg",
        executable="robot_news_station",
        name="robot_news_station_einstein",
        parameters=[ 
            {"robot_name": "Einstein"}
        ]
    )

    bach_node = Node (
        package="my_py_pkg",
        executable="robot_news_station",
        name="robot_news_station_bach",
        parameters=[ 
            {"robot_name": "Bach"}
        ]
    )

    smartphone_node = Node (
        package="my_py_pkg",
        executable="smartphone"
    )   

    ld.add_action(bach_node)
    ld.add_action(darwin_node)
    ld.add_action(einstein_node)
    ld.add_action(hume_node)
    ld.add_action(socrates_node)
    ld.add_action(smartphone_node)
    return ld 