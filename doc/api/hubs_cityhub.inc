.. autoclass:: pybricks.hubs.CityHub
    :no-members:

    .. rubric:: Motor and Sensor Ports

    .. data:: Port.A
    .. data:: Port.B

    Usage of each built-in device is described below.

    .. rubric:: Using the hub status light

    .. automethod:: pybricks._instances.light.on

    .. automethod:: pybricks._instances.light.off

        Example::

            # Initialize CityHub at the top of your script
            hub = CityHub()

            # Make the light red
            hub.light.on(Color.RED)

            # Wait
            wait(1000)

            # Turn the light off
            hub.light.off()

    .. rubric:: Using the battery

    .. automethod:: pybricks._instances.battery.voltage

    .. automethod:: pybricks._instances.battery.current