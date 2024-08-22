#!/bin/bash

# Your Bluetooth device MAC address
DEVICE_MAC="88:08:94:11:10:99"

# Function to check if audio is playing
is_audio_playing() {
    pactl list sink-inputs | grep -q 'State: RUNNING'
    return $?
}

# Main loop
while true; do
    if ! is_audio_playing; then
        echo "No audio detected. Disconnecting Blu
        etooth..."
        bluetoothctl disconnect $DEVICE_MAC
        exit 0
    fi
    sleep 5  # Check every 5 seconds
done
