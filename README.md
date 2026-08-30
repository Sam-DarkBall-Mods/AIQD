# AIQD

[![CI](https://github.com/Sam-DarkBall-Mods/AIQD/actions/workflows/ci.yml/badge.svg)](https://github.com/Sam-DarkBall-Mods/AIQD/actions/workflows/ci.yml)

AIQD stands for AI Quadratic Detection. When a player opens a UAV gunner view,
the mod searches for nearby vehicles and draws a box around targets the UAV can
see. Fog, daylight, night vision and thermal mode affect the result. The search
distance can be changed in CBA settings.

## Requirements

- Arma 3 2.22 or newer
- CBA_A3

## Building

```bash
python3 -B -m unittest discover -s tests -p "test_*.py" -v
hemtt check
hemtt build --no-bin
```

The old `AIQD` PBO prefix and `DB_AIQD` function namespace stay in place
because missions may already refer to them.

## License

The SQF code, Arma config and build files use GPL-2.0-or-later. Original assets
use APL-SA. See [LICENSES.md](LICENSES.md).
