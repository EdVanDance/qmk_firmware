/* Copyright 2021 Edgar Keller (@EdVanDance)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


// Everything off, just layer indication
RGB_MATRIX_EFFECT(off_effect)


#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static bool off_effect(effect_params_t* params)
{
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    for (uint8_t i = led_min; i < led_max; i++)
    {
        rgb_matrix_set_color(i, 0x00, 0x00, 0x00);
    }

    return led_max < DRIVER_LED_TOTAL;
}

#endif

// vim: syntax=c
