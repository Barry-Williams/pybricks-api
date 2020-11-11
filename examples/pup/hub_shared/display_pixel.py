from pybricks.hubs import ExampleHub
from pybricks.tools import wait

# Initialize the hub.
hub = ExampleHub()

# Turn off all the pixels.
hub.display.off()

# Turn on the pixel at row 1, column 2.
hub.display.pixel(1, 2)
wait(2000)

# Turn on the pixel at row 2, column 4, at 50% brightness.
hub.display.pixel(2, 4, 50)
wait(2000)

# Turn off the pixel at row 1, column 2.
hub.display.pixel(1, 2, 0)
wait(2000)
