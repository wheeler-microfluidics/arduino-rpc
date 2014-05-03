#ifndef ___NODE__H___
#define ___NODE__H___

#include <stdint.h>
#include "Memory.h"

class Node {
public:
  uint32_t total_ram_size() { return ram_size(); }
  uint32_t ram_data_size() { return data_size(); }
  uint32_t ram_bss_size() { return bss_size(); }
  uint32_t ram_heap_size() { return heap_size(); }
  uint32_t ram_stack_size() { return stack_size(); }
  uint32_t ram_free() { return free_memory(); }

  uint8_t high() const { return HIGH; }
  uint8_t low() const { return LOW; }
  uint8_t output() const { return OUTPUT; }
  uint8_t input() const { return INPUT; }

  void pin_mode(uint8_t pin, uint8_t mode) { return pinMode(pin, mode); }
  bool digital_read(uint8_t pin) const { return digitalRead(pin); }
  void digital_write(uint8_t pin, uint8_t value) { digitalWrite(pin, value); }
  uint16_t analog_read(uint8_t pin) const { return analogRead(pin); }
  void analog_write(uint8_t pin, uint8_t value) { return analogWrite(pin, value); }
  uint32_t get_millis() const { return millis(); }
  uint32_t get_micros() const { return micros(); }
};


#endif  // #ifndef ___NODE__H___